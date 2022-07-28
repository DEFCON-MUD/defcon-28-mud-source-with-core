inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 43, 0 }));
  set_short( "Corridor - x53y43z0" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y44z0.c",
  "south" : DIR+"/rooms/x53y42z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
