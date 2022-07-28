inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 4 }));
  set_short( "Hallway - x35y38z4" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y38z4.c",
  "south" : DIR+"/rooms/x35y37z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
