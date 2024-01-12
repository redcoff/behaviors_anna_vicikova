return {
    Individual_anna = {

        description = "Individual by AV",
        simpleClass = true,

        parents ={
            "Base"
        },

        Match = function()
            return self.GetEntity == nil
        end,

        behaviors = {

            Crouch = {tree = 'stance_crouch'},
            Advance = {tree = 'stance_prone'},
            Idle = {tree = 'stance_prone'},

        },
    },
}