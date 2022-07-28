inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 7 }));
  set_short( "Corridor - x17y48z7" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y48z7.c",
  "north" : DIR+"/rooms/x17y49z7.c",
  "south" : DIR+"/rooms/x17y47z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
