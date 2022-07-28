inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 24, 5 }));
  set_short( "Hallway - x39y24z5" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y25z5.c",
  "south" : DIR+"/rooms/x39y23z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
