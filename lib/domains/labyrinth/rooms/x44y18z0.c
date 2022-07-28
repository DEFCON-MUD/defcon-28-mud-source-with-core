inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 18, 0 }));
  set_short( "Hallway - x44y18z0" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y18z0.c",
  "east" : DIR+"/rooms/x45y18z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
