inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 7 }));
  set_short( "Passage - x59y16z7" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y16z7.c",
  "north" : DIR+"/rooms/x59y17z7.c",
  "south" : DIR+"/rooms/x59y15z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
