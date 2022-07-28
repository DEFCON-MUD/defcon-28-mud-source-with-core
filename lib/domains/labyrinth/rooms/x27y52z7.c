inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 52, 7 }));
  set_short( "Corridor - x27y52z7" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y52z7.c",
  "east" : DIR+"/rooms/x28y52z7.c",
  "north" : DIR+"/rooms/x27y53z7.c",
  "south" : DIR+"/rooms/x27y51z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
