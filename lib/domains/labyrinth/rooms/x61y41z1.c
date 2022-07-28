inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 41, 1 }));
  set_short( "Passage - x61y41z1" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y42z1.c",
  "south" : DIR+"/rooms/x61y40z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
