inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 41, 3 }));
  set_short( "Corridor - x53y41z3" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y42z3.c",
  "south" : DIR+"/rooms/x53y40z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
