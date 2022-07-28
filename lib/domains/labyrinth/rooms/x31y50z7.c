inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 50, 7 }));
  set_short( "Passage - x31y50z7" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y51z7.c",
  "south" : DIR+"/rooms/x31y49z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
