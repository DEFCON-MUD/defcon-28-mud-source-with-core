inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 52, 8 }));
  set_short( "Passage - x31y52z8" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y53z8.c",
  "south" : DIR+"/rooms/x31y51z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
