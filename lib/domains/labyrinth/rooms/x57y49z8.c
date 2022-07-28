inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 49, 8 }));
  set_short( "Passage - x57y49z8" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y50z8.c",
  "south" : DIR+"/rooms/x57y48z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
