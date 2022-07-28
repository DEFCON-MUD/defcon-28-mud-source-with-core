inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 35, 5 }));
  set_short( "Hallway - x9y35z5" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y36z5.c",
  "south" : DIR+"/rooms/x9y34z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
