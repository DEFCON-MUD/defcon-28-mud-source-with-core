inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 51, 6 }));
  set_short( "Corridor - x5y51z6" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y52z6.c",
  "south" : DIR+"/rooms/x5y50z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
