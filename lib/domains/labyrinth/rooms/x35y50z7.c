inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 50, 7 }));
  set_short( "Passage - x35y50z7" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y50z7.c",
  "east" : DIR+"/rooms/x36y50z7.c",
  "south" : DIR+"/rooms/x35y49z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
