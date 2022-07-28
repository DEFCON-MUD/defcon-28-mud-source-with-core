inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 18, 0 }));
  set_short( "Hallway - x5y18z0" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y19z0.c",
  "south" : DIR+"/rooms/x5y17z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
