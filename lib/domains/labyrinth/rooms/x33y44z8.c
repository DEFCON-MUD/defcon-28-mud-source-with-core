inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 44, 8 }));
  set_short( "Hallway - x33y44z8" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y44z8.c",
  "south" : DIR+"/rooms/x33y43z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
