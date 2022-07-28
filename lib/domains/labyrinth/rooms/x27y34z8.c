inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 34, 8 }));
  set_short( "Passage - x27y34z8" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y34z8.c",
  "east" : DIR+"/rooms/x28y34z8.c",
  "north" : DIR+"/rooms/x27y35z8.c",
  "south" : DIR+"/rooms/x27y33z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
