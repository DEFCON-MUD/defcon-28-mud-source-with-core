inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 52, 4 }));
  set_short( "Hallway - x39y52z4" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y52z4.c",
  "south" : DIR+"/rooms/x39y51z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
