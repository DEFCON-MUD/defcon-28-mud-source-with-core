inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 33, 6 }));
  set_short( "Hallway - x39y33z6" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y34z6.c",
  "south" : DIR+"/rooms/x39y32z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
