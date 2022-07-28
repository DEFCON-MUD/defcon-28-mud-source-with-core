inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 38, 2 }));
  set_short( "Corridor - x41y38z2" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y38z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
