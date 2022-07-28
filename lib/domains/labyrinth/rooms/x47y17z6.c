inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 17, 6 }));
  set_short( "Passage - x47y17z6" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y18z6.c",
  "south" : DIR+"/rooms/x47y16z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
