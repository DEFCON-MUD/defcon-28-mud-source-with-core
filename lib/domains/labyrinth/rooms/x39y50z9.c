inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 50, 9 }));
  set_short( "Corridor - x39y50z9" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y51z9.c",
  "south" : DIR+"/rooms/x39y49z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
