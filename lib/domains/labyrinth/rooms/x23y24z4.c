inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 24, 4 }));
  set_short( "Hallway - x23y24z4" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y24z4.c",
  "north" : DIR+"/rooms/x23y25z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
