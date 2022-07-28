inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 17, 1 }));
  set_short( "Hallway - x45y17z1" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y18z1.c",
  "south" : DIR+"/rooms/x45y16z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
