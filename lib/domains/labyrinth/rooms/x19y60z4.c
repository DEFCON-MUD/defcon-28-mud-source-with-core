inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 60, 4 }));
  set_short( "Corridor - x19y60z4" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y60z4.c",
  "north" : DIR+"/rooms/x19y61z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
