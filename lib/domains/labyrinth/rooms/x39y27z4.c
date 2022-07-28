inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 27, 4 }));
  set_short( "Hallway - x39y27z4" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y28z4.c",
  "south" : DIR+"/rooms/x39y26z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
