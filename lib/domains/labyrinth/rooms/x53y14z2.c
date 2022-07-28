inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 14, 2 }));
  set_short( "Passage - x53y14z2" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y14z2.c",
  "north" : DIR+"/rooms/x53y15z2.c",
  "south" : DIR+"/rooms/x53y13z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
