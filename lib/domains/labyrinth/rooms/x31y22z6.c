inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 22, 6 }));
  set_short( "Hallway - x31y22z6" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y22z6.c",
  "north" : DIR+"/rooms/x31y23z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
