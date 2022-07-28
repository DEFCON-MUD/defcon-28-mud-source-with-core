inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 17, 7 }));
  set_short( "Passage - x53y17z7" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y18z7.c",
  "south" : DIR+"/rooms/x53y16z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
