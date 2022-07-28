inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 44, 9 }));
  set_short( "Hallway - x41y44z9" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y44z9.c",
  "south" : DIR+"/rooms/x41y43z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
