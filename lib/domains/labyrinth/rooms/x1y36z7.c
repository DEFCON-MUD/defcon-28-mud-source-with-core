inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 7 }));
  set_short( "Passage - x1y36z7" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y36z7.c",
  "north" : DIR+"/rooms/x1y37z7.c",
  "south" : DIR+"/rooms/x1y35z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
