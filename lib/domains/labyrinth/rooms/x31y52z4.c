inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 52, 4 }));
  set_short( "Hallway - x31y52z4" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y52z4.c",
  "south" : DIR+"/rooms/x31y51z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
