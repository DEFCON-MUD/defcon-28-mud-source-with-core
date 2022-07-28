inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 11, 8 }));
  set_short( "Hallway - x19y11z8" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y12z8.c",
  "south" : DIR+"/rooms/x19y10z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
