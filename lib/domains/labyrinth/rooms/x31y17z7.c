inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 17, 7 }));
  set_short( "Hallway - x31y17z7" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y18z7.c",
  "south" : DIR+"/rooms/x31y16z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
