inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 64, 2 }));
  set_short( "Corridor - x39y64z2" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y64z2.c",
  "east" : DIR+"/rooms/x40y64z2.c",
  "south" : DIR+"/rooms/x39y63z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
