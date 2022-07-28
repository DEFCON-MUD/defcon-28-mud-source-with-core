inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 47, 4 }));
  set_short( "Corridor - x37y47z4" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y48z4.c",
  "south" : DIR+"/rooms/x37y46z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
