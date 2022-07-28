inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 26, 8 }));
  set_short( "Corridor - x38y26z8" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y26z8.c",
  "east" : DIR+"/rooms/x39y26z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
