inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 18, 4 }));
  set_short( "Hallway - x41y18z4" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y18z4.c",
  "north" : DIR+"/rooms/x41y19z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
