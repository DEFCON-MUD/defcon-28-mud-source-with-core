inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 17, 0 }));
  set_short( "Hallway - x35y17z0" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y18z0.c",
  "south" : DIR+"/rooms/x35y16z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
