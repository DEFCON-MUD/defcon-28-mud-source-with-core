inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 44, 1 }));
  set_short( "Corridor - x9y44z1" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y44z1.c",
  "south" : DIR+"/rooms/x9y43z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
