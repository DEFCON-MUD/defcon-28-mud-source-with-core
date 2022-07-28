inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 44, 4 }));
  set_short( "Corridor - x47y44z4" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y45z4.c",
  "south" : DIR+"/rooms/x47y43z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
