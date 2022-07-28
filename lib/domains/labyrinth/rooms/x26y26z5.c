inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 26, 5 }));
  set_short( "Passage - x26y26z5" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y26z5.c",
  "east" : DIR+"/rooms/x27y26z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
