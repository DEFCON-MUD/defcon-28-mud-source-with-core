inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 51, 9 }));
  set_short( "Hallway - x7y51z9" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y52z9.c",
  "south" : DIR+"/rooms/x7y50z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
