inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 18, 9 }));
  set_short( "Corridor - x35y18z9" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y18z9.c",
  "north" : DIR+"/rooms/x35y19z9.c",
  "south" : DIR+"/rooms/x35y17z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
