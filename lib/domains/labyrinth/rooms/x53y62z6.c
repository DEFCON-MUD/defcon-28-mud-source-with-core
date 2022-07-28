inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 62, 6 }));
  set_short( "Corridor - x53y62z6" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y62z6.c",
  "east" : DIR+"/rooms/x54y62z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
