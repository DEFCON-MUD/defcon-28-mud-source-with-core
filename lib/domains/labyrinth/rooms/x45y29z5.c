inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 29, 5 }));
  set_short( "Corridor - x45y29z5" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y30z5.c",
  "south" : DIR+"/rooms/x45y28z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
