inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 61, 0, -9 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^" );

  set_objects(
    DIR+"/npc/teacher.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/60_0_-9.c"
  ]) );

}

