inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 47, 8 }));
  set_short( "Hallway - x57y47z8" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y48z8.c",
  "south" : DIR+"/rooms/x57y46z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
