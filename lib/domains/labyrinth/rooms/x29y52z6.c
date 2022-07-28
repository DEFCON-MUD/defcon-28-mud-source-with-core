inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 52, 6 }));
  set_short( "Corridor - x29y52z6" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y52z6.c",
  "north" : DIR+"/rooms/x29y53z6.c",
  "south" : DIR+"/rooms/x29y51z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
