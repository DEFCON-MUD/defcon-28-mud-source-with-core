inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 36, 1 }));
  set_short( "Hallway - x49y36z1" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y37z1.c",
  "south" : DIR+"/rooms/x49y35z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
