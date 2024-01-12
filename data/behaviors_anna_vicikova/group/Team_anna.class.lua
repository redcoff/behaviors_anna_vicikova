return {
    Team_anna = {

        description = "Team group by AV",
        simpleClass = true,

		parents ={
            "Base"
        },

        Match = function()
            return self.GetEntity ~= nil
        end,

        behaviors = {

            Move = {tree = 'group_move'},

        },
    },
}