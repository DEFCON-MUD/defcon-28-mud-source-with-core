inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 52, 4 }));
  set_short( "Hallway - x37y52z4" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y52z4.c",
  "south" : DIR+"/rooms/x37y51z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
