inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 41, 9 }));
  set_short( "Corridor - x53y41z9" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y42z9.c",
  "south" : DIR+"/rooms/x53y40z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
